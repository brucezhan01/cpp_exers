#pragma once

#include <iostream>

class simpleCount {
    int count;
    friend std::ostream& operator<<(std::ostream &out, const simpleCount &count);

public:
    simpleCount(int init=0): count(init) {}

    simpleCount& operator++() {
        std::cout << "pre-increment" << std::endl;
        ++count;
        return *this;
    }

    simpleCount& operator--() {
        std::cout << "pre-decrement" << std::endl;
        --count;
        return *this;
    }

    simpleCount operator++(int) {
        std::cout << "post-increment" << std::endl;
        simpleCount tmp(count);
        ++(*this);
        return tmp;
    }

    simpleCount operator--(int) {
        std::cout << "post-decrement" << std::endl;
        simpleCount tmp(count);
        --(*this);
        return tmp;
    }

};

std::ostream& operator<<(std::ostream &out, const simpleCount &count) {
    out << count.count;
    return out;
}
