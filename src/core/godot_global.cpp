/*************************************************************************/
/*  godot_global.cpp                                                      */
/*************************************************************************/
/*                       This file_ is part of:                           */
/*                           GODOT ENGINE                                */
/*                      https://godotengine.org                          */
/*************************************************************************/
/* Copyright (c) 2007-2022 Juan Linietsky, Ariel Manzur.                 */
/* Copyright (c) 2014-2022 godot engine contributors (cf. AUTHORS.md).   */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/

#include "godot_global.hpp"

#include "string.hpp"

#include "wrapped.hpp"

static GDCALLINGCONV void *wrapper_create(void *data, const void *type_tag, godot_object *instance) {
	gd::_Wrapped *wrapper_memory = (gd::_Wrapped *)gd::api->godot_alloc(sizeof(gd::_Wrapped));

	if (!wrapper_memory)
		return NULL;
	wrapper_memory->_owner = instance;
	wrapper_memory->_type_tag = (size_t)type_tag;

	return (void *)wrapper_memory;
}

static GDCALLINGCONV void wrapper_destroy(void *data, void *wrapper) {
	if (wrapper)
		gd::api->godot_free(wrapper);
}

namespace gd {

void *_RegisterState::nativescript_handle;
int _RegisterState::language_index;

const godot_gdnative_core_api_struct *api = nullptr;
const godot_gdnative_core_1_1_api_struct *core_1_1_api = nullptr;
const godot_gdnative_core_1_2_api_struct *core_1_2_api = nullptr;

const godot_gdnative_ext_nativescript_api_struct *nativescript_api = nullptr;
const godot_gdnative_ext_nativescript_1_1_api_struct *nativescript_1_1_api = nullptr;
const godot_gdnative_ext_pluginscript_api_struct *pluginscript_api = nullptr;
const godot_gdnative_ext_android_api_struct *android_api = nullptr;
const godot_gdnative_ext_arvr_api_struct *arvr_api = nullptr;
const godot_gdnative_ext_videodecoder_api_struct *videodecoder_api = nullptr;
const godot_gdnative_ext_net_api_struct *net_api = nullptr;
const godot_gdnative_ext_net_3_2_api_struct *net_3_2_api = nullptr;

const void *gdnlib = NULL;

void godot::print(const string &message) {
	gd::api->godot_print((godot_string *)&message);
}

void godot::print_warning(const string &description, const string &function, const string &file_, int line) {
	int len;

	char *c_desc = description.alloc_c_string();
	char *c_func = function.alloc_c_string();
	char *c_file = file_.alloc_c_string();

	if (c_desc != nullptr && c_func != nullptr && c_file != nullptr) {
		gd::api->godot_print_warning(c_desc, c_func, c_file, line);
	};

	if (c_desc != nullptr)
		gd::api->godot_free(c_desc);
	if (c_func != nullptr)
		gd::api->godot_free(c_func);
	if (c_file != nullptr)
		gd::api->godot_free(c_file);
}

void godot::print_error(const string &description, const string &function, const string &file_, int line) {
	int len;

	char *c_desc = description.alloc_c_string();
	char *c_func = function.alloc_c_string();
	char *c_file = file_.alloc_c_string();

	if (c_desc != nullptr && c_func != nullptr && c_file != nullptr) {
		gd::api->godot_print_error(c_desc, c_func, c_file, line);
	};

	if (c_desc != nullptr)
		gd::api->godot_free(c_desc);
	if (c_func != nullptr)
		gd::api->godot_free(c_func);
	if (c_file != nullptr)
		gd::api->godot_free(c_file);
}

void ___register_types();
void ___init_method_bindings();

void godot::gdnative_init(godot_gdnative_init_options *options) {
	gd::api = options->api_struct;
	gd::gdnlib = options->gd_native_library;

	const godot_gdnative_api_struct *core_extension = gd::api->next;

	while (core_extension) {
		if (core_extension->version.major == 1 && core_extension->version.minor == 1) {
			gd::core_1_1_api = (const godot_gdnative_core_1_1_api_struct *)core_extension;
		} else if (core_extension->version.major == 1 && core_extension->version.minor == 2) {
			gd::core_1_2_api = (const godot_gdnative_core_1_2_api_struct *)core_extension;
		}
		core_extension = core_extension->next;
	}

	// now find our extensions
	for (int i = 0; i < gd::api->num_extensions; i++) {
		switch (gd::api->extensions[i]->type) {
			case GDNATIVE_EXT_NATIVESCRIPT: {
				gd::nativescript_api = (const godot_gdnative_ext_nativescript_api_struct *)gd::api->extensions[i];

				const godot_gdnative_api_struct *extension = gd::nativescript_api->next;

				while (extension) {
					if (extension->version.major == 1 && extension->version.minor == 1) {
						gd::nativescript_1_1_api = (const godot_gdnative_ext_nativescript_1_1_api_struct *)extension;
					}

					extension = extension->next;
				}
			} break;
			case GDNATIVE_EXT_PLUGINSCRIPT: {
				gd::pluginscript_api = (const godot_gdnative_ext_pluginscript_api_struct *)gd::api->extensions[i];
			} break;
			case GDNATIVE_EXT_ANDROID: {
				gd::android_api = (const godot_gdnative_ext_android_api_struct *)gd::api->extensions[i];
			} break;
			case GDNATIVE_EXT_ARVR: {
				gd::arvr_api = (const godot_gdnative_ext_arvr_api_struct *)gd::api->extensions[i];
			} break;
			case GDNATIVE_EXT_VIDEODECODER: {
				gd::videodecoder_api = (const godot_gdnative_ext_videodecoder_api_struct *)gd::api->extensions[i];
			} break;
			case GDNATIVE_EXT_NET: {
				gd::net_api = (const godot_gdnative_ext_net_api_struct *)gd::api->extensions[i];

				const godot_gdnative_api_struct *extension = gd::net_api->next;

				while (extension) {
					if (extension->version.major == 3 && extension->version.minor == 2) {
						gd::net_3_2_api = (const godot_gdnative_ext_net_3_2_api_struct *)extension;
					}

					extension = extension->next;
				}
			} break;

			default:
				break;
		}
	}

	// Initialize the `language_index` here since `__register_types_()` makes use of it.
	godot_instance_binding_functions binding_funcs = {};
	binding_funcs.alloc_instance_binding_data = wrapper_create;
	binding_funcs.free_instance_binding_data = wrapper_destroy;

	gd::_RegisterState::language_index = gd::nativescript_1_1_api->godot_nativescript_register_instance_binding_data_functions(binding_funcs);

	// register these now
	___register_types();
	___init_method_bindings();
}

void godot::gdnative_terminate(godot_gdnative_terminate_options *options) {
	// reserved for future use.
}

void godot::gdnative_profiling_add_data(const char *p_signature, uint64_t p_time) {
	gd::nativescript_1_1_api->godot_nativescript_profiling_add_data(p_signature, p_time);
}

void godot::nativescript_init(void *handle) {
	gd::_RegisterState::nativescript_handle = handle;
}

void godot::nativescript_terminate(void *handle) {
	gd::nativescript_1_1_api->godot_nativescript_unregister_instance_binding_data_functions(gd::_RegisterState::language_index);
}

} // namespace gd
