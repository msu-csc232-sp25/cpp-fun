//
// Created by jdaehn on 1/23/25.
//

#ifndef CSC232_BAG_H
#define CSC232_BAG_H

#include <vector>

template<typename T>
class Bag {
public:
    virtual int getCurrentSize() const = 0;
    virtual bool isEmpty() const = 0;
    virtual bool add(const T& item) = 0;
    virtual bool remove(const T& item) = 0;
    virtual void clear() = 0;
    virtual int getFrequencyOf(const T& item) = 0;
    virtual bool contains(const T& item) = 0;
    virtual std::vector<T> toVector() const = 0;
};

#endif // CSC232_BAG_H
