/**
 * @brief MemoryCell implementation.
 * @author Jim Daehn
 * @file memory_cell.cpp
 */

#include "memory_cell.h"

template<typename Object>
MemoryCell<Object>::MemoryCell(const Object &initialValue) : storedValue{initialValue} {
    // Intentionally empty
}

template<typename Object>
const Object& MemoryCell<Object>::read() const {
    return storedValue;
}

template<typename Object>
void MemoryCell<Object>::write(const Object &value) {
    storedValue = value;
}

