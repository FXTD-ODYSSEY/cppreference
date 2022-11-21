// cppreference link https://en.cppreference.com/w/cpp/keyword/alignof
#include <cstddef>
#include <iostream>
int main()
{
    std::cout << alignof(std::max_align_t) << '\n';
}
