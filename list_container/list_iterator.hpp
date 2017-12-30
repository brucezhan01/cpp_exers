#pragma once
#include <stdexcept>

template<typename N>
class list;   // forward declaration; used for friend declaration

template<typename T>
class list_iterator {
    T* pos;
    template<typename N>
    friend class list;

public:
    // must use typename to avoid compilation error
    typedef typename T::value_type value_type;
    typedef typename T::reference_type reference_type;
    typedef typename T::const_reference_type const_reference_type;
    typedef list_iterator<T> self_type;

    list_iterator(): pos(0) {} // construct an empty iterator
    list_iterator(T *pos): pos(pos) {}

    bool operator !=(self_type const &rhs) const {
        return pos != rhs.pos;
    }

    bool operator ==(self_type const &rhs) const {
        return pos == rhs.pos;
    }

    self_type& operator ++() {
        if (pos) pos = pos->next;
        return *this;
    }

    reference_type operator *() throw (std::runtime_error) {
        if (pos) return pos->value;
        else throw (std::runtime_error("dereferencing null iterator!"));
    }
    
};
