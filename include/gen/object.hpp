#ifndef GODOT_CPP_OBJECT_HPP
#define GODOT_CPP_OBJECT_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/core_types.hpp>
#include <core/tag_db.hpp>

namespace gd {

class object;
class reference;

class object : public _Wrapped {
public: enum { ___CLASS_IS_SCRIPT = 0, };

private:
	struct ___method_bindings {
		godot_method_bind *mb__get;
		godot_method_bind *mb__get_property_list;
		godot_method_bind *mb__init;
		godot_method_bind *mb__notification;
		godot_method_bind *mb__set;
		godot_method_bind *mb__to_string;
		godot_method_bind *mb_add_user_signal;
		godot_method_bind *mb_call;
		godot_method_bind *mb_call_deferred;
		godot_method_bind *mb_callv;
		godot_method_bind *mb_can_translate_messages;
		godot_method_bind *mb_connect;
		godot_method_bind *mb_disconnect;
		godot_method_bind *mb_emit_signal;
		godot_method_bind *mb_free;
		godot_method_bind *mb_get;
		godot_method_bind *mb_get_class;
		godot_method_bind *mb_get_incoming_connections;
		godot_method_bind *mb_get_indexed;
		godot_method_bind *mb_get_instance_id;
		godot_method_bind *mb_get_meta;
		godot_method_bind *mb_get_meta_list;
		godot_method_bind *mb_get_method_list;
		godot_method_bind *mb_get_property_list;
		godot_method_bind *mb_get_script;
		godot_method_bind *mb_get_signal_connection_list;
		godot_method_bind *mb_get_signal_list;
		godot_method_bind *mb_has_meta;
		godot_method_bind *mb_has_method;
		godot_method_bind *mb_has_signal;
		godot_method_bind *mb_has_user_signal;
		godot_method_bind *mb_is_blocking_signals;
		godot_method_bind *mb_is_class;
		godot_method_bind *mb_is_connected;
		godot_method_bind *mb_is_queued_for_deletion;
		godot_method_bind *mb_notification;
		godot_method_bind *mb_property_list_changed_notify;
		godot_method_bind *mb_remove_meta;
		godot_method_bind *mb_set;
		godot_method_bind *mb_set_block_signals;
		godot_method_bind *mb_set_deferred;
		godot_method_bind *mb_set_indexed;
		godot_method_bind *mb_set_message_translation;
		godot_method_bind *mb_set_meta;
		godot_method_bind *mb_set_script;
		godot_method_bind *mb_to_string;
		godot_method_bind *mb_tr;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Object"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Object"; }
	static inline object *___get_from_variant(variant a) { godot_object *o = (godot_object*) a; return (o) ? (object *) gd::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(gd::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ConnectFlags {
		CONNECT_DEFERRED = 1,
		CONNECT_PERSIST = 2,
		CONNECT_ONESHOT = 4,
		CONNECT_REFERENCE_COUNTED = 8,
	};

	// constants
	const static int NOTIFICATION_POSTINITIALIZE = 0;
	const static int NOTIFICATION_PREDELETE = 1;


	static object *_new();

	// methods
#ifndef GODOT_CPP_NO_OBJECT_CAST
	template<class T>
	static T *cast_to(const object *obj);
#endif

	variant _get(const string property);
	array _get_property_list();
	void _init();
	void _notification(const int64_t what);
	bool _set(const string property, const variant value);
	string _to_string();
	void add_user_signal(const string signal, const array arguments = array());
	variant call(const string method, const array& __var_args = array());
	void call_deferred(const string method, const array& __var_args = array());
	variant callv(const string method, const array arg_array);
	bool can_translate_messages() const;
	error connect(const string signal, const object *target, const string method, const array binds = array(), const int64_t flags = 0);
	void disconnect(const string signal, const object *target, const string method);
	void emit_signal(const string signal, const array& __var_args = array());
	void free();
	variant get(const string property) const;
	string get_class() const;
	array get_incoming_connections() const;
	variant get_indexed(const node_path property) const;
	int64_t get_instance_id() const;
	variant get_meta(const string name, const variant _default = variant()) const;
	pool_string_array get_meta_list() const;
	array get_method_list() const;
	array get_property_list() const;
	reference *get_script() const;
	array get_signal_connection_list(const string signal) const;
	array get_signal_list() const;
	bool has_meta(const string name) const;
	bool has_method(const string method) const;
	bool has_signal(const string signal) const;
	bool has_user_signal(const string signal) const;
	bool is_blocking_signals() const;
	bool is_class(const string _class) const;
	bool is_connected(const string signal, const object *target, const string method) const;
	bool is_queued_for_deletion() const;
	void notification(const int64_t what, const bool reversed = false);
	void property_list_changed_notify();
	void remove_meta(const string name);
	void set(const string property, const variant value);
	void set_block_signals(const bool enable);
	void set_deferred(const string property, const variant value);
	void set_indexed(const node_path property, const variant value);
	void set_message_translation(const bool enable);
	void set_meta(const string name, const variant value);
	void set_script(const reference *script_);
	string to_string();
	string tr(const string message) const;
	template <class... Args> variant call(const string method, Args... args){
		return call(method, array::make(args...));
	}
	template <class... Args> void call_deferred(const string method, Args... args){
		return call_deferred(method, array::make(args...));
	}
	template <class... Args> void emit_signal(const string signal, Args... args){
		return emit_signal(signal, array::make(args...));
	}

};

}

#endif