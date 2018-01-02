#include <iostream>
#include "simpleCount.hpp"

int main()
{
    simpleCount cnt(6);
    cnt++;
    std::cout << cnt << std::endl;
    ++cnt;
    std::cout << cnt << std::endl;
    --cnt;
    std::cout << cnt << std::endl;
    cnt--;
    std::cout << cnt << std::endl;
    return 0;
}


