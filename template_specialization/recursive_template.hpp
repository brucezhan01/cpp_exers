#pragma once

template<int i>
void print() {
    print<i-1>();
    std::cout << i << std::endl;
}

template<>
void print<1>() {
    std::cout << 1 << std::endl;
}

