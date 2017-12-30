#include <iostream>
#include "list.hpp"

int main()
{
    list<int> li;
    for (int i = 0; i < 10; ++i) {
        li.push_front(i);
    }

    std::cout <<"1): " << std::endl;
    for (auto i = li.begin(); i != li.end(); ++i) {
        std::cout << *i << std::endl;
    }

    auto iter = li.begin();
    ++iter;
    li.insert(iter, 100);

    std::cout <<"2): " << std::endl;
    for (auto i = li.begin(); i != li.end(); ++i) {
        std::cout << *i << std::endl;
    }

    return 0;
}
