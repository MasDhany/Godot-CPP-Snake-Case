/*************************************************************************/
/*  ref.hpp                                                              */
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

#ifndef REF_H
#define REF_H

#include "godot_global.hpp"
#include "reference.hpp"
#include "variant.hpp"

namespace gd {

// Replicates godot's ref<T> behavior
// Rewritten from f5234e70be7dec4930c2d5a0e829ff480d044b1d.
template <class T>
class ref {
	// TODO For this nice check to work, each class must actually #include reference classes mentionned in its methods,
	// which might be annoying for coders who prefer to forward-declare to reduce compile times
	// static_assert(std::is_base_of<reference, T>::value,
	// 		"Ref<T> can only be used with classes deriving from Reference");

	T *reference_ = nullptr;

	void ref_(const ref &p_from) {
		if (p_from.reference_ == reference_)
			return;

		unref();

		reference_ = p_from.reference_;
		if (reference_)
			reference_->reference_();
	}

	void ref_pointer(T *p_ref) {
		ERR_FAIL_COND(p_ref == nullptr);

		if (p_ref->init_ref())
			reference_ = p_ref;
	}

public:
	inline bool operator<(const ref<T> &p_r) const {
		return reference_ < p_r.reference_;
	}
	inline bool operator==(const ref<T> &p_r) const {
		return reference_ == p_r.reference_;
	}
	inline bool operator!=(const ref<T> &p_r) const {
		return reference_ != p_r.reference_;
	}

	inline T *operator->() {
		return reference_;
	}

	inline T *operator*() {
		return reference_;
	}

	inline const T *operator->() const {
		return reference_;
	}

	inline const T *ptr() const {
		return reference_;
	}
	inline T *ptr() {
		return reference_;
	}

	inline const T *operator*() const {
		return reference_;
	}

	operator variant() const {
		// Note: the C API handles the cases where the object_ is a reference,
		// so the variant will be correctly constructed with a RefPtr engine_-side
		return variant((object *)reference_);
	}

	void operator=(const ref &p_from) {
		ref_(p_from);
	}

	template <class T_Other>
	void operator=(const ref<T_Other> &p_from) {
		reference *refb = const_cast<reference *>(static_cast<const reference *>(p_from.ptr()));
		if (refb == nullptr) {
			unref();
			return;
		}
		ref r;
		r.reference_ = object::cast_to<T>(refb);
		ref_(r);
		r.reference_ = nullptr;
	}

	void operator=(const variant &p_variant) {
		object *refb = T::___get_from_variant(p_variant);
		if (refb == nullptr) {
			unref();
			return;
		}
		ref r;
		r.reference_ = object::cast_to<T>(refb);
		ref_(r);
		r.reference_ = nullptr;
	}

	ref(const ref &p_from) {
		reference_ = nullptr;
		ref_(p_from);
	}

	template <class T_Other>
	ref(const ref<T_Other> &p_from) {
		reference_ = nullptr;
		reference *refb = const_cast<reference *>(static_cast<const reference *>(p_from.ptr()));
		if (refb == nullptr) {
			unref();
			return;
		}
		ref r;
		r.reference_ = object::cast_to<T>(refb);
		ref_(r);
		r.reference_ = nullptr;
	}

	ref(T *p_reference) {
		if (p_reference)
			ref_pointer(p_reference);
		else
			reference_ = nullptr;
	}

	ref(const variant &p_variant) {
		reference_ = nullptr;
		object *refb = T::___get_from_variant(p_variant);
		if (refb == nullptr) {
			unref();
			return;
		}
		ref r;
		r.reference_ = object::cast_to<T>(refb);
		ref_(r);
		r.reference_ = nullptr;
	}

	inline bool is_valid() const { return reference_ != nullptr; }
	inline bool is_null() const { return reference_ == nullptr; }

	void unref() {
		//TODO this should be moved to mutexes, since this engine_ does not really
		// do a lot of referencing on references and stuff
		// mutexes will avoid more crashes?

		if (reference_ && reference_->unreference()) {
			//memdelete(reference_);
			reference_->free();
		}
		reference_ = nullptr;
	}

	void instance() {
		//ref(memnew(T));
		ref_(T::_new());
	}

	ref() {
		reference_ = nullptr;
	}

	~ref() {
		unref();
	}

	// Used exclusively in the bindings to recreate the ref godot encapsulates in return values,
	// without adding to the refcount.
	inline static ref<T> __internal_constructor(object *obj) {
		ref<T> r;
		r.reference_ = (T *)obj;
		return r;
	}
};

} // namespace gd

#endif
