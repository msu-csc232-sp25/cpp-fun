//
// Created by jdaehn on 1/23/25.
//

#ifndef CSC232_ARRAY_BAG_H
#define CSC232_ARRAY_BAG_H

#include "bag.h"

template<typename T>
class ArrayBag : public Bag<T> {
private:
    static const int DEFAULT_CAPACITY{6};
    T items[DEFAULT_CAPACITY];
    int itemCount;
    int maxItems;

public:
    ArrayBag();
    int getCurrentSize() const override;
    bool isEmpty() const override;
    bool add(const T& item) override;
    bool remove(const T& item) override;
    void clear() override;
    int getFrequencyOf(const T& item) override;
    bool contains(const T& item) override;
    std::vector<T> toVector() const override;
};

#endif // CSC232_ARRAY_BAG_H
